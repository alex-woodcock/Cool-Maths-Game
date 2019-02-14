using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
using System.IO;


public class mainScript : MonoBehaviour {
    public GameObject Shadow;
    public GameObject Platform;
    public GameObject ShadowClone0, ShadowClone1, ShadowClone2, ShadowClone3;
    public shadowScript SCS0, SCS1, SCS2, SCS3;
    //public AudioSource audio;
    //public AudioClip audioClip;
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
    public int hideCount = 0;
    public int hiddenCount = 0;
    int abilityOneCharge = 10;
    int abilityOneSlider = 100;

    public TextMeshProUGUI victoryScreenText;
    // Use this for initialization
    void Start () {
        //audio.clip = audioClip;
        
        //victoryScreenText = GameObject.Find("")
        //victoryScreenText = GameObject.Find("Canvas").GetComponentInChildren<textBoxScript>();
        //victoryScreenText = 
        //DontDestroyOnLoad(this);
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

    private void Awake()
    {
        
    }

    // Update is called once per frame
    void Update () {
        if (health<1)
        {
            health = 100;
            Lose();
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
        if (abilityOneCharge>=10)
        {
            GameObject.Find("AbilityOne").GetComponentInChildren<Slider>().enabled = false;
        }
        else
        {
            GameObject.Find("AbilityOne").GetComponentInChildren<Slider>().enabled = true;
        }
        
    }

    public void Clicked(int type)
    {
        //this stuff is done later in Question(). It seems more fitting to check there.
        if (type == solutionShadow){internalScore++; totalScore++; health = 100; if (abilityOneCharge <= 10) { abilityOneCharge++; /*audio.Play();*/} }
        else{internalScore++; /*totalScore--;*/ if (abilityOneCharge > 0) { abilityOneCharge = abilityOneCharge - 2; } }
        
        Question();
    }

    public bool IsPrime(int number)
    {

        if (number == 1) return false;
        if (number == 2) return true;

        if (number % 2 == 0) return false; // Even number     

        for (int i = 2; i < number; i++)
        { // Advance from two to include correct calculation for '4'
            if (number % i == 0) return false;
        }

        return true;

    }

    void Question()
    {
        GameObject.Find("AbilityOne").GetComponentInChildren<Slider>().value = 1f- 0.1f * abilityOneCharge;
        operatorKey = rand.Next(0, 4);///////TODO - THIS DOESNT ALLOW FOR DIVISION CAUSE DIVISION IS HARD
        numberOne = rand.Next(1,13);
        numberTwo = rand.Next(1, 13);
        solutionShadow = rand.Next(0, 4);
        //questionString = numberOne.ToString(); //obsolete by placing it after any changes that might happen to numberOne
        questionString = "";//needed to reset qstring after ^ that got removed
        if (operatorKey==0)
        {
            questionString += "+";
            solution = numberOne + numberTwo;
        }
        else if (operatorKey == 1) //subtract
        {
            //numberOne = rand.Next(1, 13); //unnecessary
            while (numberTwo > numberOne)
            {
                numberTwo = rand.Next(1, 13);
            }
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
            /*
            if (IsPrime(numberOne)) //why this? // pretty sure this literally just excludes 11. Still worth having tho prolly
            {
                numberOne = rand.Next(1, 13);
            }
                while (((float)numberOne / (float)numberTwo) % 1 != 0) //1,2,3,4,5,6,7,8,9,10,11,12. / 1,2,3,4,5,6,7,8,9,10,11,12
                { // 7/3=2.333 2.333%1 = 0.333   0.333!=0 so \/
                    numberTwo = rand.Next(1, 13); //random random random until 7, right?
                }
            questionString += "/";
            solution = numberOne / numberTwo; //solution is an int. This is okay because the result should always be an integer.
            */
            solution = numberOne;
            numberOne = numberOne * numberTwo;
            questionString += "/";
        }

        questionString = numberOne.ToString()+questionString;
        questionString += numberTwo.ToString()+"=";
        questionString = "SCORE: " + totalScore.ToString() + "    " + questionString;
        int iForeach = -1;
        //if (true)//(hideCount>0)
        //{
        //    hiddenCount = 2;
        //}
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
                    if (hiddenCount>0)
                    {
                        SendDataTempVar = (shadowScript)GetType().GetField(i).GetValue(this);
                        SendDataTempVar.Hide();
                        hiddenCount--;
                        Debug.Log("howsitgoin");
                    }
                    noRepeats = rand.Next(0, 144);
                }
                SendData(i, noRepeats);
            }
        }
    }

    void EverySecond()
    {
        health=health-damage;
        if (health <0)
        {
            health = 0;
        }
    }

    void SendData(string address, int data)
    {
        SendDataTempVar = (shadowScript)GetType().GetField(address).GetValue(this);
        SendDataTempVar.SetText(data);
        GameObject.Find("QuestionTextBox").GetComponent<textBoxScript>().text = questionString;
    }

    public void AbilityOne()
    {
        //if (abilityOneCharge >= 10) //irrelevant after GetCharges();
        //{
        abilityOneCharge = 0;
        //GameObject.Find("AbilityOne").GetComponentInChildren<Slider>().enabled = true;
        GameObject.Find("AbilityOne").GetComponentInChildren<Slider>().value = 1f;
        hideCount = 2;
        for (int i = 0; i < 4; i++)
        {
            if (i != solutionShadow && hideCount > 0)
            {
                hideCount--;
                GameObject.Find("shadow" + i.ToString()).GetComponent<shadowScript>().Hide();
            }
        }
        //}
    }

    public bool GetCharges(int abilityNum)
    {
        /*
        if (abilityNum == 1 && abilityOneCharge >=10)
        {
            return true;
        }
        else
        {
            return false;
        }
        */
        return true;
    }

    static void lineChanger(string newText, string fileName, int line_to_edit)
    {
        string[] arrLine = File.ReadAllLines(fileName);
        arrLine[line_to_edit] = newText;
        File.WriteAllLines(fileName, arrLine);
    }

    void Lose()
    {
        string path = "Assets/Resources/SaveFile.txt";
        //StreamWriter writer = new StreamWriter(path, true);
        string[] lines = File.ReadAllLines(path);
        //writer.Write()
        lines[0] = totalScore.ToString();
        //File.WriteAllText(path, "");
        if (Convert.ToInt32(lines[1])<Convert.ToInt32(lines[0]))
        {
            lines[1] = lines[0];
        }
        lineChanger(lines[0], path, 0);
        lineChanger(lines[1], path, 1);
        //writer = new StreamWriter(path, true);
        //writer.WriteLine(lines[0]);
        //writer.WriteLine(lines[1]);
        //writer.Close();

        //GameObject.Find("mainController").GetComponent<handleTextfileScript>().WriteString(totalScore.ToString());
        SceneManager.LoadScene("VictoryScene");
        //GameObject.Find("Canvas").GetComponentInChildren<textBoxScript>().text = "YOU SCORED: " + totalScore + "\n\nTOP SCORE: " + "86";
        //Destroy(GameObject.Find("mainController"));
        //if (SceneManager.GetActiveScene().name != "VictoryScene")
        //{
            //
            //
            //
        //}
        

    }

}
/*
Ability Ideas
Healing one - resets the timer
Get rid of 2 wrong answers and reset the timer
Increase the time on the questions but you get fewer points
Reduce the time on the questions but you get more points
*/