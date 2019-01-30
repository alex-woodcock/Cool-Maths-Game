using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class mainScript : MonoBehaviour {
    public GameObject Shadow;
    public GameObject Platform;
    public GameObject ShadowClone1;
    public GameObject ShadowClone2;
    public GameObject ShadowClone3;
    public GameObject ShadowClone4;

	// Use this for initialization
	void Start () {
        for (int i=1; i<5; i++)
        {
            GameObject shadowClone = Instantiate(Shadow, new Vector3((i-2)*3+0.5f, -1f,-1f), Quaternion.Euler(new Vector3(0,0,0)));
            shadowClone.gameObject.name = "shadow"+i.ToString();
            //shadowClone.GetComponent("Canvas").name = "Canvas" + i.ToString();
            shadowClone.SendMessage("OnInstantiation", i);
            if (i==1)
            {
                ShadowClone1 = shadowClone;
            }
            else if (i==2)
            {
                ShadowClone2 = shadowClone;
            }
            else if (i == 3)
            {
                ShadowClone3 = shadowClone;
            }
            else
            {
                ShadowClone4 = shadowClone;
            }
            GameObject platformClone = Instantiate(Platform, new Vector2((i - 2) * 3 + 0.5f, -1.25f), Quaternion.Euler(new Vector3(0, 0, 0)));
            platformClone.gameObject.name = "platform" + i.ToString();
            platformClone.SendMessage("OnInstantiation", i);
        }
		
	}
	
	// Update is called once per frame
	void Update () {
        //ShadowClone1.GetComponent<shadowScript>().OnQuestion(69);
        ShadowClone1.GetComponent<shadowScript>().answer = 69;
        ShadowClone1.GetComponent<Canvas>().GetComponent<TextMesh>().text = 420.ToString();
        //Shadow.SendMessage("OnQuestion", 69);
	}

    void Question()
    {
        for (int i=1; i<5; i++)
        {
            Shadow.SendMessage("OnQuestion", 42);
        }
    }

    public static void Clicked(int type, int answer)
    {

    }
}
