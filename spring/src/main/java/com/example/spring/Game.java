package com.example.spring;

public class Game {

    private static final int MAX_LEVEL = 999;
    private String name; //이름
    private Role role; //직업
    private int power; //힘
    private int heart; //체력
    private int defense; //방어력
    
    // 생성자
    public Game(String name, int heart, int power, int defense ,Role role) {
        this.name = name;
        this.heart = heart;
        this.power = power;
        this.defense = defense;
        this.role = role;
    }
    // 공격을 한다
    public void Attack(int power) {
        int damage = power;
    }

    // 공격을 당한다
    public String Attacked(String attackerName, int damage) {
        this.heart -= damage - (this.defense / 10);
        if (this.heart <= 0) {
            return this.name + "이(가) " + attackerName + "에게 죽어버림";
        } else {
            return this.name + "이(가) " + damage + "만큼의 공격을 받고 " + this.heart + "의 체력이 남음";
        }
    }

    public int getPower() {
        return power;
    }

    public String getName() {
        return name;
    }

}
