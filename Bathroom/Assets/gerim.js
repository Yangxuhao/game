#pragma strict
var grime:Rigidbody2D;
var speed:float = -2.0;
var acid:Rigidbody2D;

function Start () {
	//SpawnGrime();
}

function Update () {
	
}
InvokeRepeating("SpawnGrime",3,5);
function SpawnGrime(){
	var grimeInstance:Rigidbody2D;
	grimeInstance = Instantiate(grime, Vector3(Random.Range(-5.4,5.4),5,0),Quaternion.Euler(new Vector3(0,0,0)));
	grimeInstance.name = "germ(Clone)";
	grimeInstance.velocity = new Vector2(0,speed);
}

InvokeRepeating("SpawnAcid",4,6);
function SpawnAcid(){
	var grimeInstance:Rigidbody2D;
	grimeInstance = Instantiate(acid, Vector3(Random.Range(-5.4,5.4),5,0),Quaternion.Euler(new Vector3(0,0,0)));
	grimeInstance.name = "acid(Clone)";
	grimeInstance.velocity = new Vector2(0,speed);
}
