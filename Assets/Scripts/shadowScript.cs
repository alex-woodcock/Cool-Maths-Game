using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shadowScript : MonoBehaviour {
    private int type = 0;
    private int answer = 0;
    bool mouseOver = false;
    //1 = blue
    //2 = green
    //3 = red
    //4 = yellow

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        
	}

    void OnInstantiation(int typeData)
    {
        type = typeData;
    }

    void OnQuestion(int answerData)
    {
        answer = answerData;
    }

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
