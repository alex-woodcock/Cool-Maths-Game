﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class healthScript : MonoBehaviour {
    float posX = 2;
    float posY = 4;
    public int hp = 100;
    float xScale = 4f;
    float yScale = 0.15f;
    //x scale = 4
    public mainScript mainScript;
    //Component mainScriptScript;

	// Use this for initialization
	void Start () {
        //mainScript = GameObject.Find("mainController");
        //mainScriptScript = mainScript.GetComponent("mainScript");
	}
	
	// Update is called once per frame
	void Update () {
        hp = mainScript.health;
        xScale = 4f * hp / 100f;
        transform.localScale = new Vector2(xScale, yScale);
        posX = hp / 25f - 0.01f*(100-hp)-2;
        transform.position = new Vector3(posX, posY, -1);
        //z of -1 stops it from defaulting to a z of 0 when given a vector 2 location, and z fighting with its backdrop and the background
    }
}
