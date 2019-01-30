/*
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shadowScript : MonoBehaviour {
    private int type = 0;
    public string cloneName = "";
    public int answer = 0;
    bool mouseOver = false;
    public TextMesh textMesh;
    GameObject ThisClone;
    //1 = blue
    //2 = green
    //3 = red
    //4 = yellow

    // Use this for initialization
    void Start () {
        ThisClone = GameObject.Find(cloneName);
        textMesh = ThisClone.GetComponent("Canvas").GetComponent<TextMesh>();
        Debug.Log(ThisClone);
    }
	
	// Update is called once per frame
	void Update () {
        textMesh.text = answer.ToString();
        Debug.Log("bbb:" + answer);
    }

    void OnInstantiation(int typeData)
    {
        type = typeData;
    }
    /*
    public void OnQuestion(int answerData)
    {
        answer = answerData;
        Debug.Log("aaa:"+answer);
    }
    *//*
    private void OnMouseOver()
    {
        mouseOver = true;
    }

    private void OnMouseExit()
    {
        mouseOver = false;
    }

    private void OnMouseDown()
    {
        if (mouseOver)
        {
            mainScript.Clicked(type, answer);
        }
    }
}
*/