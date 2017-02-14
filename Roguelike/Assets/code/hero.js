#pragma strict

var speed:float = 3.0;
var right:boolean = false;
var left:boolean = false;
var up:boolean = false;
var down:boolean = false;
var orb:Rigidbody2D;
var enemy:Rigidbody2D;
var orbSpeed:float = 20f;
var orbSpeed2:float = -20f;
var animator:Animator;

function OnGUI(){

	GUI.Box  (Rect (10,10,100,40),""+Time.time);
}
function OnCollisionEnter2D(other:Collision2D){

}


function Update(){
	var orbInstance:Rigidbody2D;
	if(Input.GetButtonDown("Fire1")){
	orbInstance = Instantiate(orb,transform.position,Quaternion.Euler(new Vector3(-1,0,0)));

	if(right == true){
	orbInstance.velocity = new Vector2(orbSpeed,0);
	}
	if(left == true){
	orbInstance.velocity = new Vector2(orbSpeed2,0);
	}
	if(up == true){
	orbInstance.velocity = new Vector2(0,orbSpeed);
	}
	if(down == true){
	orbInstance.velocity = new Vector2(0,orbSpeed2);
	}
	}
}

function Start () {
animator = GetComponent("Animator");
enemySpawn();	
}
InvokeRepeating("enemySpawn",3,3);

function enemySpawn(){

	var enemyInstance:Rigidbody2D;
	enemyInstance = Instantiate(enemy,Vector3(Random.Range(2,8),Random.Range(-4,4),0),Quaternion.Euler(new Vector3(0,0,0)));
}

function FixedUpdate(){

MoveCharacter();

}

function MoveCharacter(){
	if(Input.GetKey(KeyCode.D)){
	animator.SetBool("left",false);
	animator.SetBool("down",false);
	animator.SetBool("up",false);
	animator.SetBool("right",true);

	left = false;
	down = false;
	up = false;
	right = true;

	transform.Translate(Vector3.right*speed*Time.deltaTime);
	}
	if(Input.GetKey(KeyCode.A)){
	animator.SetBool("left",true);
	animator.SetBool("down",false);
	animator.SetBool("up",false);
	animator.SetBool("right",false);

	left = true;
	down = false;
	up = false;
	right = false;

	transform.Translate(Vector3.left*speed*Time.deltaTime);
	}

	if(Input.GetKey(KeyCode.W)){
	animator.SetBool("left",false);
	animator.SetBool("down",false);
	animator.SetBool("up",true);
	animator.SetBool("right",false);

	left = false;
	down = false;
	up = true;
	right = false;

	transform.Translate(Vector3.up*speed*Time.deltaTime);
	}

	if(Input.GetKey(KeyCode.S)){
	animator.SetBool("left",false);
	animator.SetBool("down",true);
	animator.SetBool("up",false);
	animator.SetBool("right",false);

	left = false;
	down = true;
	up = false;
	right = false;

	transform.Translate(Vector3.down*speed*Time.deltaTime);
	}

	//if(right == true){
	//transform.Translate(Vector3.right*speed*Time.deltaTime);
	//}
	//if(left == true){
	//transform.Translate(Vector3.left*speed*Time.deltaTime);
	//}
}