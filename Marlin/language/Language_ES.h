#ifndef LANGUAGE_ES_H
#define LANGUAGE_ES_H

#include <avr/pgmspace.h>

const char ES_SCREEN_EMERGENCY_TITLE[] PROGMEM          = "Parada Emerg. activa";
const char ES_SCREEN_EMERGENCY_TEXT[] PROGMEM           = "Mant""\xe9""n pulsado para desbloquear la impresora";
const char ES_SCREEN_EMERGENCY_BOX[] PROGMEM            = "Bloqueado";
const char ES_SCREEN_SD_LIST_TITLE[] PROGMEM            = "Imprimir desde SD";
const char ES_SCREEN_SD_LIST_CONFIRM[] PROGMEM          = """\xbf""Imprimir archivo?";
const char ES_SCREEN_SD_LIST_BACK[] PROGMEM             = "Volver al men""\xfa""";
const char ES_SCREEN_SD_LIST_PREV[] PROGMEM             = "Carpeta anterior";
const char ES_SCREEN_UNLOAD_INIT_TITLE[] PROGMEM        = "Retirar filamento";
const char ES_SCREEN_UNLOAD_INIT_TEXT[] PROGMEM         = """\xbf""Iniciar proceso?";
const char ES_SCREEN_UNLOAD_HOME_TITLE[] PROGMEM        = "Retirar filamento";
const char ES_SCREEN_UNLOAD_HOME_TEXT[] PROGMEM         = "Ajustando posici""\xf3""n";
const char ES_SCREEN_UNLOAD_SELECT_TITLE[] PROGMEM      = "Temperatura";
const char ES_SCREEN_UNLOAD_HEATING_TITLE[] PROGMEM     = "Temperatura";
const char ES_SCREEN_UNLOAD_INFO_TITLE[] PROGMEM        = "Instrucciones";
const char ES_SCREEN_UNLOAD_INFO_TEXT[] PROGMEM         = "Pulsa y espera a que expulse el filamento para retirarlo";
const char ES_SCREEN_UNLOADING_TITLE[] PROGMEM          = "Retirar filamento";
const char ES_SCREEN_UNLOADING_TEXT[] PROGMEM           = "Expulsando...";
const char ES_SCREEN_UNLOAD_CONFIRM_TITLE[] PROGMEM     = "Finalizado";
const char ES_SCREEN_UNLOAD_CONFIRM_TEXT[] PROGMEM      = """\xbf""Todo correcto?";
const char ES_SCREEN_LOAD_INIT_TITLE[] PROGMEM          = "Insertar filamento";
const char ES_SCREEN_LOAD_INIT_TEXT[] PROGMEM           = """\xbf""Iniciar proceso?";
const char ES_SCREEN_LOAD_HOME_TITLE[] PROGMEM          = "Insertar filamento";
const char ES_SCREEN_LOAD_HOME_TEXT[] PROGMEM           = "Ajustando posici""\xf3""n";
const char ES_SCREEN_LOAD_SELECT_TITLE[] PROGMEM        = "Temperatura";
const char ES_SCREEN_LOAD_HEATING_TITLE[] PROGMEM       = "Temperatura";
const char ES_SCREEN_LOAD_INFO_TITLE[] PROGMEM          = "Instrucciones";
const char ES_SCREEN_LOAD_INFO_TEXT[] PROGMEM           = "Introduce el filamento y pulsa el bot""\xf3""n para cargarlo";
const char ES_SCREEN_LOADING_TITLE[] PROGMEM            = "Insertar filamento";
const char ES_SCREEN_LOADING_TEXT[] PROGMEM             = "Cargando filamento...";
const char ES_SCREEN_LOAD_CONFIRM_TITLE[] PROGMEM       = "Finalizado";
const char ES_SCREEN_LOAD_CONFIRM_TEXT[] PROGMEM        = """\xbf""Todo correcto?";
const char ES_SCREEN_LEVEL_INIT_TITLE[] PROGMEM         = "Nivelar base";
const char ES_SCREEN_LEVEL_INIT_TEXT[] PROGMEM          = """\xbf""Iniciar proceso?";
const char ES_SCREEN_LEVEL_PREHEATING_TITLE[] PROGMEM   = "Temperatura";
const char ES_SCREEN_LEVEL_HOMING_TITLE[] PROGMEM       = "Home";
const char ES_SCREEN_LEVEL_HOMING_TEXT[] PROGMEM        = "Ajustando posici""\xf3""n...";
const char ES_SCREEN_LEVEL1_TITLE[] PROGMEM             = "Nivelar base";
const char ES_SCREEN_LEVEL1_TEXT[] PROGMEM              = "Ajusta el primer punto hasta que se encienda la luz roja";
const char ES_SCREEN_LEVEL2_TITLE[] PROGMEM             = "Nivelar base";
const char ES_SCREEN_LEVEL2_TEXT[] PROGMEM              = "Ajusta el segundo punto hasta que se encienda la luz roja";
const char ES_SCREEN_LEVEL3_TITLE[] PROGMEM             = "Nivelar base";
const char ES_SCREEN_LEVEL3_TEXT[] PROGMEM              = "Ajusta el tercer punto hasta que se encienda la luz roja";
const char ES_SCREEN_LEVEL_CONFIRM_TITLE[] PROGMEM      = "Finalizado";
const char ES_SCREEN_LEVEL_CONFIRM_TEXT[] PROGMEM       = """\xbf""Todo correcto?";
const char ES_SCREEN_AUTOHOME_INIT_TITLE[] PROGMEM      = "Home";
const char ES_SCREEN_AUTOHOME_INIT_TEXT[] PROGMEM       = """\xbf""Iniciar proceso?";
const char ES_SCREEN_AUTOHOME_HEATING_TITLE[] PROGMEM   = "Temperatura";
const char ES_SCREEN_AUTOHOME_HOMING_TITLE[] PROGMEM    = "Home";
const char ES_SCREEN_AUTOHOME_HOMING_TEXT[] PROGMEM     = "Ajustando posici""\xf3""n";
const char ES_SCREEN_SETTINGS_TITLE[] PROGMEM           = "Ajustes";
const char ES_SCREEN_SETTINGS_TEXT[] PROGMEM            = "Selecciona opci""\xf3""n";
const char ES_SCREEN_MOVE_INFO_TITLE[] PROGMEM          = "Mover ejes";
const char ES_SCREEN_MOVE_INFO_TEXT[] PROGMEM           = "No se conoce la posici""\xf3""n, realiza home para continuar";
const char ES_SCREEN_MOVE_TITLE[] PROGMEM               = "Mover ejes";
const char ES_SCREEN_MOVE_TEXT[] PROGMEM                = "Selecciona opci""\xf3""n";
const char ES_SCREEN_MOVE_CONFIRM_TITLE[] PROGMEM       = "Extrusor / Mover mm";
const char ES_SCREEN_MOVE_CONFIRM_TEXT[] PROGMEM        = """\xbf""Calentar extrusor?";
const char ES_SCREEN_MOVE_HEATING_TITLE[] PROGMEM       = "Temperatura";
const char ES_SCREEN_MOVE_X_TITLE[] PROGMEM             = "Eje X / Mover mm";
const char ES_SCREEN_MOVE_X_TEXT[] PROGMEM              = "Selecciona opci""\xf3""n";
const char ES_SCREEN_MOVE_Y_TITLE[] PROGMEM             = "Eje Y / Mover mm";
const char ES_SCREEN_MOVE_Y_TEXT[] PROGMEM              = "Selecciona opci""\xf3""n";
const char ES_SCREEN_MOVE_Z_TITLE[] PROGMEM             = "Eje Z / Mover mm";
const char ES_SCREEN_MOVE_Z_TEXT[] PROGMEM              = "Selecciona opci""\xf3""n";
const char ES_SCREEN_MOVE_E_TITLE[] PROGMEM             = "Extrusor / Mover mm";
const char ES_SCREEN_MOVE_E_TEXT[] PROGMEM              = "Selecciona opci""\xf3""n";
const char ES_SCREEN_MOVE_X_01MM_TITLE[] PROGMEM        = "Eje X / 0,1mm";
const char ES_SCREEN_MOVE_X_1MM_TITLE[] PROGMEM         = "Eje X / 1mm";
const char ES_SCREEN_MOVE_X_10MM_TITLE[] PROGMEM        = "Eje X / 10mm";
const char ES_SCREEN_MOVE_Y_01MM_TITLE[] PROGMEM        = "Eje Y / 0,1mm";
const char ES_SCREEN_MOVE_Y_1MM_TITLE[] PROGMEM         = "Eje Y / 1mm";
const char ES_SCREEN_MOVE_Y_10MM_TITLE[] PROGMEM        = "Eje Y / 10mm";
const char ES_SCREEN_MOVE_Z_01MM_TITLE[] PROGMEM        = "Eje Z / 0,1mm";
const char ES_SCREEN_MOVE_Z_1MM_TITLE[] PROGMEM         = "Eje Z / 1mm";
const char ES_SCREEN_MOVE_Z_10MM_TITLE[] PROGMEM        = "Eje Z / 10mm";
const char ES_SCREEN_MOVE_E_01MM_TITLE[] PROGMEM        = "Extrusor / 0,1mm";
const char ES_SCREEN_MOVE_E_1MM_TITLE[] PROGMEM         = "Extrusor / 1mm";
const char ES_SCREEN_TEMP_TITLE[] PROGMEM               = "Temperatura";
const char ES_SCREEN_TEMP_HEATING_TITLE[] PROGMEM       = "Temperatura";
const char ES_SCREEN_INFO_TITLE[] PROGMEM               = "Versi""\xf3""n";
const char ES_SCREEN_CONTACT_TITLE[] PROGMEM            = "Soporte";
const char ES_SCREEN_CONTACT_TEXT[] PROGMEM             = "www.bq.com Support3D@bq.com";
const char ES_SCREEN_OFFSET_INIT_TITLE[] PROGMEM        = "Ajustar offset";
const char ES_SCREEN_OFFSET_INIT_TEXT[] PROGMEM         = """\xbf""Iniciar proceso?";
const char ES_SCREEN_OFFSET_PREHEATING_TITLE[] PROGMEM  = "Temperatura";
const char ES_SCREEN_OFFSET_HOME_TITLE[] PROGMEM        = "Ajustar offset";
const char ES_SCREEN_OFFSET_HOME_TEXT[] PROGMEM         = "Ajustando posici""\xf3""n...";
const char ES_SCREEN_OFFSET_PLANE_TITLE[] PROGMEM       = "Ajustar offset";
const char ES_SCREEN_OFFSET_PLANE_TEXT[] PROGMEM        = "Calculando el plano de la base...";
const char ES_SCREEN_OFFSET_INFO_TITLE[] PROGMEM        = "Instrucciones";
const char ES_SCREEN_OFFSET_INFO_TEXT[] PROGMEM         = "Pulsa y ajusta el valor hasta que la boquilla toque la base";
const char ES_SCREEN_OFFSET_SET_TITLE[] PROGMEM         = "Ajustar offset";
const char ES_SCREEN_OFFSET_FINISH_TITLE[] PROGMEM      = "Finalizado";
const char ES_SCREEN_OFFSET_FINISH_TEXT[] PROGMEM       = """\xbf""Todo correcto?";
const char ES_SCREEN_PRINT_HEATING_TITLE[] PROGMEM      = "Temperatura";
const char ES_SCREEN_PRINT_PRINTING[] PROGMEM           = "Imprimiendo";
const char ES_SCREEN_PRINT_PAUSE[] PROGMEM              = "Pausa";
const char ES_SCREEN_PRINT_PAUSED[] PROGMEM             = "En pausa";
const char ES_SCREEN_PRINT_PAUSING[] PROGMEM            = "Pausando...";
const char ES_SCREEN_PRINT_COMPLETE_TITLE[] PROGMEM     = "Impresi""\xf3""n finalizada";
const char ES_SCREEN_PRINT_COMPLETE_TEXT[] PROGMEM      = "Retire la pieza de la base";
const char ES_SCREEN_STOP_CONFIRM_TITLE[] PROGMEM       = "Detener";
const char ES_SCREEN_CHANGE_INIT_TITLE[] PROGMEM        = "Cambiar filamento";
const char ES_SCREEN_CHANGE_INIT_TEXT[] PROGMEM         = """\xbf""Iniciar proceso?";
const char ES_SCREEN_CHANGE_PAUSE_TITLE[] PROGMEM       = "Cambiar filamento";
const char ES_SCREEN_CHANGE_PAUSE_TEXT[] PROGMEM        = "Pausando...";
const char ES_SCREEN_CHANGE_SELECT_TITLE[] PROGMEM      = "Temperatura";
const char ES_SCREEN_CHANGE_HEATING_TITLE[] PROGMEM     = "Temperatura";
const char ES_SCREEN_CHANGE_INFO1_TITLE[] PROGMEM       = "Instrucciones";
const char ES_SCREEN_CHANGE_INFO1_TEXT[] PROGMEM        = "Pulsa y espera a que expulse el filamento para retirarlo";
const char ES_SCREEN_CHANGE_UNLOAD_TITLE[] PROGMEM      = "Retirar filamento";
const char ES_SCREEN_CHANGE_UNLOAD_TEXT[] PROGMEM       = "Expulsando...";
const char ES_SCREEN_CHANGE_INFO2_TITLE[] PROGMEM       = "Instrucciones";
const char ES_SCREEN_CHANGE_INFO2_TEXT[] PROGMEM        = "Introduce el filamento y pulsa el bot""\xf3""n para cargarlo";
const char ES_SCREEN_CHANGE_LOAD_TITLE[] PROGMEM        = "Insertar filamento";
const char ES_SCREEN_CHANGE_LOAD_TEXT[] PROGMEM         = "Cargando filamento...";
const char ES_SCREEN_CHANGE_CONFIRM_TITLE[] PROGMEM     = "Finalizado";
const char ES_SCREEN_CHANGE_CONFIRM_TEXT[] PROGMEM      = """\xbf""Todo correcto?";
const char ES_SCREEN_SPEED_TITLE[] PROGMEM              = "Cambiar velocidad";
const char ES_SCREEN_SERIAL_TITLE[] PROGMEM             = "Control serie";
const char ES_SCREEN_WIZARD_TITLE[] PROGMEM             = "Wizard";
const char ES_SCREEN_WIZARD_SELECT[] PROGMEM            = "Selecciona idioma";
const char ES_SCREEN_WIZARD_LANGUAGE[] PROGMEM          = "Espa""\xf1""ol";
const char ES_SCREEN_WIZARD_TEXT1[] PROGMEM             = """\xa1""Bienvenido! Vamos a empezar preparando la impresora";
const char ES_SCREEN_WIZARD_TEXT2[] PROGMEM             = "Comencemos calibrando el sensor ajustando el offset";
const char ES_SCREEN_WIZARD_TEXT3[] PROGMEM             = "Recuerda mantener el extrusor y la base libre de residuos";
const char ES_SCREEN_WIZARD_TEXT4[] PROGMEM             = """\xa1""Disfruta de tu "MACHINE_NAME"! Si puedes imaginarlo puedes hacerlo";
const char ES_SCREEN_RESET_INIT_TITLE[] PROGMEM         = "Hard Reset";
const char ES_SCREEN_RESET_INIT_TEXT[] PROGMEM          = """\xbf""Restaurar valores?";
const char ES_SCREEN_RESET_INFO_TITLE[] PROGMEM         = """\xa1""Atenci""\xf3""n!";
const char ES_SCREEN_RESET_INFO_TEXT[] PROGMEM          = "Si continua se restaurar""\xe1""n los valores de f""\xe1""brica";
const char ES_SCREEN_RESET_TITLE[] PROGMEM              = "Hard Reset";
const char ES_SCREEN_RESET_TEXT[] PROGMEM               = "Borrando, no apague la impresora";
const char ES_ICON_SD_NOSD[] PROGMEM                    = "Inserta tarjeta SD";
const char ES_ICON_SD_SD[] PROGMEM                      = "Imprimir desde SD";
const char ES_ICON_FILAMENT_UNLOAD[] PROGMEM            = "Retirar filamento";
const char ES_ICON_FILAMENT_LOAD[] PROGMEM              = "Insertar filamento";
const char ES_ICON_LEVELING[] PROGMEM                   = "Nivelar base";
const char ES_ICON_HOMING[] PROGMEM                     = "Home";
const char ES_ICON_SETTINGS[] PROGMEM                   = "Ajustes";
const char ES_ICON_STEPPERS[] PROGMEM                   = "Motores ON";
const char ES_ICON_STEPPERS_OFF[] PROGMEM               = "Motores OFF";
const char ES_ICON_MOVEAXIS[] PROGMEM                   = "Mover ejes";
const char ES_ICON_TEMPERATURE[] PROGMEM                = "Cambiar temperatura";
const char ES_ICON_PLAY[] PROGMEM                       = "Reanudar";
const char ES_ICON_PAUSE[] PROGMEM                      = "Pausar";
const char ES_ICON_STOP[] PROGMEM                       = "Detener";
const char ES_ICON_CHANGE_FILAMENT[] PROGMEM            = "Cambiar filamento";
const char ES_ICON_CHANGE_SPEED[] PROGMEM               = "Cambiar velocidad";
const char ES_ICON_RETRY[] PROGMEM                      = "Reintentar";
const char ES_ICON_OK2[] PROGMEM                        = "Confirmar";
const char ES_ICON_MOVE_X[] PROGMEM                     = "Mover eje X";
const char ES_ICON_MOVE_Y[] PROGMEM                     = "Mover eje Y";
const char ES_ICON_MOVE_Z[] PROGMEM                     = "Mover eje Z";
const char ES_ICON_MOVE_E[] PROGMEM                     = "Mover extrusor";
const char ES_ICON_MOVE_10MM[] PROGMEM                  = "Mover 10mm";
const char ES_ICON_MOVE_1MM[] PROGMEM                   = "Mover 1mm";
const char ES_ICON_MOVE_01MM[] PROGMEM                  = "Mover 0.1mm";
const char ES_OPTION_LIGHTLED[] PROGMEM                 = "Led";
const char ES_OPTION_INFO[] PROGMEM                     = "Versi""\xf3""n";
const char ES_OPTION_CONTACT[] PROGMEM                  = "Soporte";
const char ES_OPTION_AUTOLEVEL[] PROGMEM                = "Auto-Nivelado";
const char ES_OPTION_SERIAL[] PROGMEM                   = "Pantalla serie";
const char ES_OPTION_OFFSET[] PROGMEM                   = "Ajustar offset";
const char ES_OPTION_LANGUAGE[] PROGMEM                 = "Idioma";
const char ES_OPTION_RESET[] PROGMEM                    = "Hard Reset";
const char ES_PUSH_TO_CONFIRM[] PROGMEM                 = "Pulsa para confirmar";
const char ES_PUSH_TO_CONTINUE[] PROGMEM                = "Pulsa para continuar";
const char ES_PUSH_TO_START[] PROGMEM                   = "Pulsa para comenzar";
const char ES_PUSH_TO_BACK[] PROGMEM                    = "Pulsa para volver";
const char ES_PUSH_TO_FINISH[] PROGMEM                  = "Pulsa para finalizar";
const char ES_PLEASE_WAIT[] PROGMEM                     = "Por favor, espera";
const char ES_BACK[] PROGMEM                            = "Volver";
const char ES_MODE[] PROGMEM                            = "Modo";
const char ES_INACTIVE[] PROGMEM                        = "inactivo";
const char ES_TEMP_OFF[] PROGMEM                        = "Off";
const char ES_TOTAL_TIME[] PROGMEM                      = "Tiempo total";
const char ES_SCREEN_ERROR_TITLE[] PROGMEM              = "Error";
const char ES_SCREEN_ERROR_TEMPERATURE_TEXT[] PROGMEM   = "Fallo en la lectura de la temperatura";
const char ES_SCREEN_MOVE_TO_UNLOAD_TITLE[] PROGMEM     = "Retirar filamento";
const char ES_SCREEN_MOVE_TO_UNLOAD_TEXT[] PROGMEM      = "Ajustando posici""\xf3""n...";
const char ES_SCREEN_MOVE_TO_LOAD_TITLE[] PROGMEM       = "Insertar filamento";
const char ES_SCREEN_MOVE_TO_LOAD_TEXT[] PROGMEM        = "Ajustando posici""\xf3""n...";
const char ES_SCREEN_MOVE_TO_CHANGE_TITLE[] PROGMEM     = "Cambiar filamento";
const char ES_SCREEN_MOVE_TO_CHANGE_TEXT[] PROGMEM      = "Ajustando posici""\xf3""n...";
const char ES_SCREEN_PRINT_STOP_TITLE[] PROGMEM         = "Impresi""\xf3""n detenida";
const char ES_SCREEN_PRINT_STOP_TEXT[] PROGMEM          = "Retira los residuos de la base";

#endif //LANGUAGE_ES_H