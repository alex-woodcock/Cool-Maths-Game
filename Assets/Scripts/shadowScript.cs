using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class shadowScript : MonoBehaviour {
    private int type;
    public GameObject myName;
    public int answer = 0;
    bool mouseOver = false;
    TextMesh textMesh;
    public Canvas myCanvas;
    public Sprite sprite0, sprite1, sprite2, sprite3, sprite4, sprite5, sprite6, sprite7, sprite8, sprite9;
    int animFrame;

    // Use this for initialization
    void Start () {
        myCanvas = this.GetComponentInChildren<Canvas>();
        textMesh = myCanvas.GetComponent<TextMesh>();
        GetComponent<SpriteRenderer>().sprite = sprite0;
    }
	
	// Update is called once per framez
	void Update ()
    {
        animFrame++;
        if (animFrame>20)
        {
            animFrame = 0;
            GetComponent<SpriteRenderer>().sprite = (Sprite)this.GetType().GetField(string.Concat("sprite", Convert.ToInt32(UnityEngine.Random.Range(0, 10)).ToString())).GetValue(this) ;
        }
    }

    public void SetText(int intToInput)
    {
        textMesh.text = intToInput.ToString();
        answer = intToInput;
    }

    void OnInstantiation(int typeData)
    {
        type = typeData;
    }

    void OnMouseOver() { mouseOver = true;}

    void OnMouseExit(){mouseOver = false;}

    void OnMouseDown()
    {
        if (mouseOver)
        {
            //Debug.Log("reee");
            GameObject.Find("mainController").GetComponent<mainScript>().toClick = true;
            GameObject.Find("mainController").GetComponent<mainScript>().givenType = type+1;
            //mainScript.Clicked(type);
        }
    }
}