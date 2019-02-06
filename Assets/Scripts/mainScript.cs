using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class mainScript : MonoBehaviour {
    public GameObject Shadow;
    public GameObject Platform;
    public GameObject ShadowClone0, ShadowClone1, ShadowClone2, ShadowClone3;
    public shadowScript SCS0, SCS1, SCS2, SCS3;
    
    shadowScript SendDataTempVar;
    System.Random rand = new System.Random();
    List<string> shadowClones = new List<string>(4) { "SCS0", "SCS1", "SCS2", "SCS3" };
    //List<string> operators = new List<string>(4) { "+", "-", "*", "/" };
    int operatorKey = 0;
    int numberOne=1;
    int numberTwo=1;
    int solution=0;
    public int solutionShadow = 0;
    public string questionString = "";
    public int internalScore;
    public int totalScore;
    public int health = 100;
    public int damage = 0;
    int noRepeats;
    public bool toClick = false; //
    public int givenType = 0; //
    bool onRun = true;
    // Use this for initialization
    void Start () {
        InvokeRepeating("EverySecond", 0.0f, 1.0f);
        for (int i=0; i<4; i++)
        {
            GameObject shadowClone = Instantiate(Shadow, new Vector3((i*1.2f-1)*3+0.5f, -2.5f,-1f), Quaternion.Euler(new Vector3(0,0,0)));
            shadowClone.gameObject.name = "shadow"+i.ToString();
            //shadowClone.GetComponent("Canvas").name = "Canvas" + i.ToString();
            shadowClone.SendMessage("OnInstantiation", i);
            shadowClone.GetComponent<shadowScript>().myName = shadowClone;
            if (i==0)
            {
                ShadowClone0 = shadowClone;
                SCS0 = ShadowClone0.GetComponent<shadowScript>();
            }
            else if (i==1)
            {
                ShadowClone1 = shadowClone;
                SCS1 = ShadowClone1.GetComponent<shadowScript>();
            }
            else if (i == 2)
            {
                ShadowClone2 = shadowClone;
                SCS2 = ShadowClone2.GetComponent<shadowScript>();
            }
            else
            {
                ShadowClone3 = shadowClone;
                SCS3 = ShadowClone3.GetComponent<shadowScript>();
            }
            GameObject platformClone = Instantiate(Platform, new Vector2((i*1.2f - 1) * 3 + 0.5f, -2.75f), Quaternion.Euler(new Vector3(0, 0, 0)));
            platformClone.gameObject.name = "platform" + i.ToString();
            platformClone.SendMessage("OnInstantiation", i);
        }
        
    }
    
	// Update is called once per frame
	void Update () {
        if (health<1)
        {
            Debug.Log("u lose");
        }
        else
        {
            if (internalScore != 10)
            {
                if (onRun)
                {
                    Question();
                    onRun = false;
                }
                //ShadowClone1.GetComponent<shadowScript>().OnQuestion(69);
                /*
                if (toClick)
                {
                    toClick = false;
                    Clicked(givenType);
                }
                */
                //Question();
                //Shadow.SendMessage("OnQuestion", 69);
            }
            else
            {
                Debug.Log("win");
                internalScore = 0;
                damage = damage + 5;
            }
        }
        
    }

    public void Clicked(int type)
    {
        //this stuff is done later in Question(). It seems more fitting to check there.
        if (type == solutionShadow){internalScore++; totalScore++; health = 100; }
        else{internalScore--; totalScore--; }
        
        Question();
    }

    void Question()
    {
        operatorKey = rand.Next(0, 3);///////TODO - THIS DOESNT ALLOW FOR DIVISION CAUSE DIVISION IS HARD
        numberOne = rand.Next(1,13);
        numberTwo = rand.Next(1, 13);
        solutionShadow = rand.Next(0, 4);
        questionString = numberOne.ToString();
        /*
        if (operatorKey == 1)
        {
            numberOne = rand.Next(1, 13);
            while (numberTwo > numberOne)
            {
                numberTwo = rand.Next(1, 13);
            }
        }
        */
        if (operatorKey==0)
        {
            questionString += "+";
            solution = numberOne + numberTwo;
        }
        else if (operatorKey == 1)
        {
            questionString += "-";
            solution = numberOne - numberTwo;
        }
        else if (operatorKey == 2)
        {
            questionString += "*";
            solution = numberOne * numberTwo;
        }
        else
        {
            questionString += "/";
            solution = numberOne / numberTwo;
        }
        
        
        questionString += numberTwo.ToString()+"=";
        questionString = "SCORE: " + totalScore.ToString() + "    " + questionString;
        int iForeach = -1;
        foreach (string i in shadowClones)
        {
            noRepeats = solution;
            iForeach++;
            if (iForeach==solutionShadow)
            {
                SendData(i, solution);
                
            }
            else
            {
                while (noRepeats==solution)
                {
                    noRepeats = rand.Next(-11, 144);
                }
                SendData(i, noRepeats);
            }
        }
    }

    void EverySecond()
    {
        health=health-damage;
    }

    void SendData(string address, int data)
    {
        SendDataTempVar = (shadowScript)GetType().GetField(address).GetValue(this);
        SendDataTempVar.SetText(data);
        GameObject.Find("QuestionTextBox").GetComponent<textBoxScript>().text = questionString;
    }
}
