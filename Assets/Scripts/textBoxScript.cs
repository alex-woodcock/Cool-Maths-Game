using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using System.IO;

public class textBoxScript : MonoBehaviour {
    public string text;
    string path = "Assets/Resources/SaveFile.txt";
    string[] lines;
    // Use this for initialization
    void Start () {
        GetComponent<TextMeshProUGUI>().text = "";
        lines = File.ReadAllLines(path);
    }
	
	// Update is called once per frame
	void Update () {
        GetComponent<TextMeshProUGUI>().text = "YOU SCORED: " + lines[0] + "\n\nTOP SCORE: " + lines[1];
    }
}
