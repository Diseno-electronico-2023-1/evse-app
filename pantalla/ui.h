// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.2.3
// LVGL version: 8.2.0
// Project name: UI

#ifndef _UI_UI_H
#define _UI_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"

#include "ui_comp.h"
#include "ui_comp_hook.h"
#include "ui_events.h"
void Up_Animation(lv_obj_t * TargetObject, int delay);
void hour_Animation(lv_obj_t * TargetObject, int delay);
void min_Animation(lv_obj_t * TargetObject, int delay);
void sec_Animation(lv_obj_t * TargetObject, int delay);
void scrolldot_Animation(lv_obj_t * TargetObject, int delay);
void ui_event_Inicio(lv_event_t * e);
extern lv_obj_t * ui_Inicio;
extern lv_obj_t * ui_Scrolldots;
extern lv_obj_t * ui_UN_Cargador;
extern lv_obj_t * ui_Bienvenido;
extern lv_obj_t * ui_logo_unal;
void ui_event_Clock(lv_event_t * e);
extern lv_obj_t * ui_Clock;
extern lv_obj_t * ui_Clock_Panel;
extern lv_obj_t * ui_Dot1;
extern lv_obj_t * ui_Dot2;
extern lv_obj_t * ui_Dot3;
extern lv_obj_t * ui_Dot4;
extern lv_obj_t * ui_Dot5;
extern lv_obj_t * ui_Dot6;
extern lv_obj_t * ui_Dot7;
extern lv_obj_t * ui_Dot8;
extern lv_obj_t * ui_Clock_Number1;
extern lv_obj_t * ui_Clock_Number2;
extern lv_obj_t * ui_Clock_Number3;
extern lv_obj_t * ui_Clock_Number4;
extern lv_obj_t * ui_Min;
extern lv_obj_t * ui_Hour;
extern lv_obj_t * ui_Sec;
extern lv_obj_t * ui_Clock_Center;
extern lv_obj_t * ui_Date;
extern lv_obj_t * ui_Scrolldots1;
void ui_event_Usuario(lv_event_t * e);
extern lv_obj_t * ui_Usuario;
extern lv_obj_t * ui_Scrolldots2;
extern lv_obj_t * ui_Seleccion_usuario;
extern lv_obj_t * ui_muestra;
extern lv_obj_t * ui_Usuario_seleccionado;
void ui_event_Info(lv_event_t * e);
extern lv_obj_t * ui_Info;
extern lv_obj_t * ui_Pary_Cloud;
extern lv_obj_t * ui_Indicadores;
extern lv_obj_t * ui_Scrolldots4;
void ui_event_Tiempo_carga(lv_event_t * e);
extern lv_obj_t * ui_Tiempo_carga;
extern lv_obj_t * ui_Alarm_container;
extern lv_obj_t * ui_Tiempo;
extern lv_obj_t * ui_h2;
extern lv_obj_t * ui_h5;
extern lv_obj_t * ui_Carga_completa;
extern lv_obj_t * ui_Scrolldots5;
extern lv_obj_t * ui____initial_actions0;


LV_IMG_DECLARE(ui_img_pattern_png);    // assets/pattern.png
LV_IMG_DECLARE(ui_img_logo_png);    // assets/logo.png
LV_IMG_DECLARE(ui_img_clock_min_png);    // assets/clock_min.png
LV_IMG_DECLARE(ui_img_clock_hour_png);    // assets/clock_hour.png
LV_IMG_DECLARE(ui_img_clock_sec_png);    // assets/clock_sec.png


LV_FONT_DECLARE(ui_font_Number);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
