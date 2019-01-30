using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class platformScript : MonoBehaviour {
    public SpriteRenderer spriteRenderer;
    public Color colour = new Color(0f, 0f, 0f);

	// Use this for initialization
	void Start () {
        spriteRenderer = GetComponent<SpriteRenderer>();
    }
	
	// Update is called once per frame
	void Update () {
        spriteRenderer.color = colour;
	}

    void OnInstantiation(int typeData)
    {
        if (typeData == 1)
        {
            colour = new Color(0f, 0f, 1f);
        }
        else if (typeData == 2)
        {
            colour = new Color(0f, 0.7333f, 0f);
        }
        else if (typeData == 3)
        {
            colour = new Color(1f, 0.0157f, 0.0431f);
        }
        else
        {
            colour = new Color(0.9843f, 0.7765f, 0.1490f);
        }
    }
}
