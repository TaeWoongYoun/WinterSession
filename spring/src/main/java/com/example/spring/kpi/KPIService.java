package com.example.spring.kpi;

import org.springframework.stereotype.Service;

@Service
public class KPIService {

    // 설비가동률(OEE) 계산
    public double calculateOEE(double actualTime, double plannedTime) {
        return (actualTime / plannedTime) * 100;
    }

    // 불량률 계산
    public double calculateDefectRate(int defects, int totalProduction) {
        return ((double) defects / totalProduction) * 100;
    }
}