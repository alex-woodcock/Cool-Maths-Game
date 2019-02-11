using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class buttonScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void StartButton()
    {
        SceneManager.LoadScene("MainScene");
    }

    public void QuitButton()
    {
        Application.Quit();
    }

    public void AbilityOneButton()
    {
        if (GameObject.Find("mainController").GetComponent<mainScript>().GetCharges(1))
        {
            GameObject.Find("Player").GetComponent<playerScript>().AbilityOne();
            GameObject.Find("mainController").GetComponent<mainScript>().AbilityOne();
            Debug.Log("buttonScript SEND");
        }
        
    }

    public void VictoryButtonContinue()
    {
        SceneManager.LoadScene("StartScene");
    }
}
