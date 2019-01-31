/*
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UICanvasScript : MonoBehaviour {
    public string questionString;
    public int solutionString;
    public GameObject questionTextBox;
    public GameObject solutionTextBox;
    GameObject mainController;

	// Use this for initialization
	void Start () {
        questionTextBox = (GameObject)GetType().GetField("QuestionTextBox").GetValue(this);
        mainController = GameObject.Find("mainController");
    }
	
	// Update is called once per frame
	void Update () {
        questionTextBox.GetComponent<textBoxScript>().text = mainController.GetComponent<mainScript>().questionString;
	}
}
*/