package com.example.spring;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;

@SpringBootApplication
public class Application {

	public static void main(String[] args) {
		SpringApplication.run(Application.class, args);
        Game ch1 = new Game("황드래곤", 80, 5, 30,Role.Mage);
        Game ch2 = new Game("미꾸라지", 10, 0, 20,Role.Knight);
        Game ch3 = new Game("청룡", 100, 998, 1000,Role.Tank);


    }

}
