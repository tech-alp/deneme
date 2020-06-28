#include <iostream>
//#include "BNO055.h"    //include BNO library for pitch,roll,yaw.
//#include "GPS.h"       //include GPS library for Longtitude, Lattitude, Altitude.
//#include "BME280.h"    //include using BME280 sensor library for heigth, also it can take velocity(may take the BNO255 library). 
class ModelUydu{
private:
	uint8_t Status;
	uint16_t Paket_No;
	float Pitch;
	float Roll;
	float Yaw;
	double Gps_Lat;
	double Gps_Long;
	double Gps_Alt;
	uint8_t Donus_Sayisi;
	bool Video_Aktarim_Bilgisi;
	String Telemetri_Data;
	bool ayrilma = false;
	//BNO055 bno; //Create a instance from BNO055 libary to take position data
	//Preasure x; //Create a instance for heigth.
	//Gps gps;    //Create a instance for position data.(Roll,Pitch,Yaw)
public:
	static int Takim_No;
	ModelUydu(){};
	ModelUydu(int);
	void get_Position();
	void get_Gonderim_Saati();
	void get_Paket_No();
	void get_Gps_Data();
	void get_Pil_Gerilim();
	void get_Telemtry_Data();    //Increase Paket_No when take an each the telemtry data and all datas have to write in this class.
	void set_Servo_Position();   //Adjust the servo motors because servo motor must look up the earth.
	void write_Telemetry_Sd_Kart();

};

class MotorDriver: public ModelUydu
{
	//Coming soon, will come PID software 
};
