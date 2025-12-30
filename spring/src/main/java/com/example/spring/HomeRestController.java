package com.example.spring;

import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;

@Controller
public class HomeRestController {

    @GetMapping("/")
    public String home(Model model) {
        Game ch1 = new Game("황드래곤", 80, 5, 30, Role.Mage);
        Game ch2 = new Game("미꾸라지", 10, 0, 20, Role.Knight);
        Game ch3 = new Game("청룡", 100, 998, 1000, Role.Tank);

        model.addAttribute("character", ch2.Attacked(ch3.getName(), ch3.getPower()));

        return "index";
    }
}