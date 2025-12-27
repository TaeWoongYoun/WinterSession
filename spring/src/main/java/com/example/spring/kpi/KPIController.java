package com.example.spring.kpi;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class KPIController {

    private final KPIService kpiService;

    public KPIController(KPIService kpiService) {
        this.kpiService = kpiService;
    }

    @GetMapping("/kpi/test")
    public String testKPI() {
        double oee = kpiService.calculateOEE(450, 480);
        double defectRate = kpiService.calculateDefectRate(5, 1000);

        return "OEE: " + oee + "%, 불량률: " + defectRate + "%";
    }
}