#pragma strict
var heroObj:GameObject;

var enemyRight:boolean = false;
var enemyLeft:boolean = false;
var enemyUp:boolean = false;
var enemyDown:boolean = false;
var enemySpeed:float;
var enemyAnimator:Animator;

InvokeRepeating("Accelerate",2,5);

function Start () {
	enemySpeed = 1.0;
}

function Update () {
	enemyMove();
}

function enemyMove(){
	heroObj = GameObject.Find("hero");
	enemyAnimator = GetComponent("Animator");
	if(heroObj != null){
	if(transform.position.y > heroObj.transform.position.y){
	    enemyAnimator.SetBool("enemyleft",false);
	     enemyAnimator.SetBool("enemyright",false);
	      enemyAnimator.SetBool("enemyup",false);
	       enemyAnimator.SetBool("enemydown",true);
	    enemyDown = true;
	    enemyUp = false;
	    enemyRight = false;
	    enemyLeft = false;
	    transform.Translate(Vector3.down*enemySpeed*Time.deltaTime);
	}else{
	     enemyAnimator.SetBool("enemyleft",false);
	     enemyAnimator.SetBool("enemyright",false);
	      enemyAnimator.SetBool("enemyup",true);
	       enemyAnimator.SetBool("enemydown",false);
	    enemyDown = false;
	    enemyUp = true;
	    enemyRight = false;
	    enemyLeft = false;
	    transform.Translate(Vector3.up*enemySpeed*Time.deltaTime);
	}
	if(transform.position.x >heroObj.transform.position.x){
	    enemyAnimator.SetBool("enemyleft",true);
	     enemyAnimator.SetBool("enemyright",false);
	      enemyAnimator.SetBool("enemyup",false);
	       enemyAnimator.SetBool("enemydown",false);
	    enemyDown = false;
	    enemyUp = false;
	    enemyRight = false;
	    enemyLeft = true;
	    transform.Translate(Vector3.left*enemySpeed*Time.deltaTime);
	}else{
	     enemyAnimator.SetBool("enemyleft",false);
	     enemyAnimator.SetBool("enemyright",true);
	      enemyAnimator.SetBool("enemyup",false);
	       enemyAnimator.SetBool("enemydown",false);
	    enemyDown = false;
	    enemyUp = false;
	    enemyRight = true;
	    enemyLeft = false;
	    transform.Translate(Vector3.right*enemySpeed*Time.deltaTime);
	}
	}
}
function Accelerate(){
enemySpeed = enemySpeed+1;
}
function OnCollisionEnter2D(other:Collision2D){
	if(other.gameObject.name == "enemy(Clone)"){
	Time.timeScale = 0;
	Destroy(gameObject);
	}

}