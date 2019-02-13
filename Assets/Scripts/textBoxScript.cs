using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using System.IO;

public class textBoxScript : MonoBehaviour {
    public string text;
    //string path = "Assets/Resources/SaveFile.txt";
    //string[] lines;
    // Use this for initialization
    void Start () {
        GetComponent<TextMeshProUGUI>().text = "";
        GetComponent<TextMeshProUGUI>().fontSize = Screen.height / 13.33f;
        GetComponent<RectTransform>().sizeDelta = new Vector2((float)Screen.height / 1440f * 1200f, (float)Screen.width / 2960f * 600f);
        if(true)//GetComponent<TextMeshProUGUI>().text == "this is where the question goes")
        {
            ///////TODO GetComponent<RectTransform>().position = new Vector2((float)Screen.height / 1440f * 400f, (float)Screen.width / 2960f * -250f);
        }
        //lines = File.ReadAllLines(path);
    }
	
	// Update is called once per frame
	void Update () {
        GetComponent<TextMeshProUGUI>().text = text;
    }
}
