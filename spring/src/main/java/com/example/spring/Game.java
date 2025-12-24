package com.example.spring;

public class Game {
    //기능
    /*
    레벨업을 하면 속성을 3 올릴 수 있다.
    죽으면 레벨이 1 내려가며 속성이 랜덤으로 3 깎인다
    */
/*========================================================*/
    //속성
    private static final int MAX_LEVEL = 999;
    private String name; //이름
    private Role role; //직업
    private int power; //힘
    private int heart; //체력
    private int speed; //이동속도
    private int defense; //방어력
// /*========================================================*/
    //동작
    // 공격을 당한다
    // (어떠한 유저에게 데미지를 받아서 기존 체력에서 몇이 까인다.)
    public void Attacked(int damage, String name, int heart) {
        heart -= damage;
        if (heart <= 0) {
            System.out.println(name+"에게 사망함");
        } else {
            System.out.println(damage+"만큼의 공격을 받고"+heart+"의 체력이 남음");
        }
    }

}
