using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class textBoxScript : MonoBehaviour {
    public string text;
	// Use this for initialization
	void Start () {
        GetComponent<TextMeshProUGUI>().text = "";
	}
	
	// Update is called once per frame
	void Update () {
        GetComponent<TextMeshProUGUI>().text = text;
    }
}
