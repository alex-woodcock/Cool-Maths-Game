using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using System.IO;

public class fileReaderForVicTextBox : MonoBehaviour {
    string path = "Assets/Resources/SaveFile.txt";
    string[] lines;
    // Use this for initialization
    void Start () {
        GetComponent<TextMeshProUGUI>().text = "";
        lines = File.ReadAllLines(path);
        GetComponent<TextMeshProUGUI>().fontSize = Screen.height / 10.33f;
        GetComponent<RectTransform>().sizeDelta = new Vector2((float)Screen.height / 1440f * 1200f, (float)Screen.width / 2960f * 600f);
    }
	
	// Update is called once per frame
	void Update () {
        GetComponent<RectTransform>().position = new Vector2((float)Screen.width / 2960f * 0f + 0.5f * Screen.width, (float)Screen.height / 1440f * 100f + 0.5f * Screen.height);
        GetComponent<TextMeshProUGUI>().text = "YOU SCORED: " + lines[0] + "\n\nTOP SCORE: " + lines[1];
    }
}
