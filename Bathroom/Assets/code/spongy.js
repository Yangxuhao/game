#pragma strict
var speed:float = 3.0;
var lives:int = 3;
var score:int = 0;
var myStyle:GUIStyle;
function Start () {
	
}

function Update () {
	MoveCharacter();
}
function MoveCharacter(){
	if(Input.GetKey(KeyCode.A)){
	transform.Translate(Vector3.left*speed*Time.deltaTime);
	}
	if(Input.GetKey(KeyCode.D)){
	transform.Translate(Vector3.right*speed*Time.deltaTime);
	}
}
function OnCollisionEnter2D(other:Collision2D){
	if(other.gameObject.name == "acid(Clone)"){
		lives = lives-1;
	
	if(lives == 0){
	Time.timeScale = 0;
	}
	}
	if(other.gameObject.name == "germ(Clone)"){
		score = score+50;
	}

}
function OnGUI(){
	GUI.Box (Rect (10,10,100,30),"Time:"+Time.time, myStyle);
	GUI.Box (Rect (200,10,100,20),"Score:"+score);
	GUI.Box (Rect (300,10,100,20),"lives:"+lives);
}