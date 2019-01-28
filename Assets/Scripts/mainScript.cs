using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class mainScript : MonoBehaviour {
    public GameObject Shadow;
	// Use this for initialization
	void Start () {
        for (int i=1; i<5; i++)
        {
            GameObject shadowClone = Instantiate(Shadow, new Vector2((i-2)*3+0.5f, -1), Quaternion.Euler(new Vector3(0,0,0)));
            shadowClone.gameObject.name = "shadow"+i.ToString();
            shadowClone.SendMessage("OnInstantiation", i);
        }
		
	}
	
	// Update is called once per frame
	void Update () {
		
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
