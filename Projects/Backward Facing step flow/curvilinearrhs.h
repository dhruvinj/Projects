#include<iostream>
#include<cmath>
#include<string>
#include<cassert>
#include<fstream>
#include<cstdlib>
#include "convection.h"
#include "viscous.h"


void convection(double** x,double** y,int nodes, double** eta, double** xita, double** G, double** J, double** xita_x, double** xita_y, double** eta_x, double** eta_y, double** x_xita, double** y_eta,double** x_eta,double** y_xita, double** u, double** v, double** p, double** U, double** V, double** g_11, double** g_12, double** g_22, double*** dEs1,double*** dEs2);


void viscous(double** x,double** y,int nodes, double** eta, double** xita, double** G, double** J, double** xita_x, double** xita_y, double** eta_x, double** eta_y, double** x_xita, double** y_eta,double** x_eta,double** y_xita, double** u, double** v, double** p, double** U, double** V, double*** dEv1,double*** dEv2, double Re);


void curvilinearrhs(double** x,double** y,int nodes, double** eta, double** xita, double** G, double** J, double** xita_x, double** xita_y, double** eta_x, double** eta_y, double** x_xita, double** y_eta,double** x_eta,double** y_xita, double** u, double** v, double** p, double** R_ca, double** R_cu, double** R_cv, double** U, double** V, double** g_11, double** g_12, double** g_22, double*** dEs1,double*** dEs2,double*** dEv1,double*** dEv2,double Re)

{



  convection( x, y,nodes, eta,  xita,  G, J,  xita_x,  xita_y,  eta_x,  eta_y,  x_xita, y_eta, x_eta, y_xita,  u,  v, p, U,  V,  g_11,  g_12, g_22, dEs1, dEs2);


  viscous(x, y, nodes, eta,  xita,  G,  J,  xita_x, xita_y,  eta_x,  eta_y,  x_xita,  y_eta, x_eta, y_xita,  u,  v,  p, U,  V, dEv1, dEv2,Re);



  for(int i = 0; i < nodes; i++)
    {
      for(int j = 0; j < nodes; j++){

	R_ca[i][j] = 0.0 ;
	R_cu[i][j] = 0.0 ;
	R_cv[i][j] = 0.0 ;
		
      }
    }

  for(int i = 1; i < nodes-1; i++)
    {
      for(int j = 1; j < nodes-1; j++){

	R_ca[i][j] = (-dEs1[0][i][j] - dEs2[0][i][j] + dEv1[0][i][j] + dEv2[0][i][j]) *J[i][j];
	R_cu[i][j] = (-dEs1[1][i][j] - dEs2[1][i][j] + dEv1[1][i][j] + dEv2[1][i][j]) *J[i][j];
	R_cv[i][j] = (-dEs1[2][i][j] - dEs2[2][i][j] + dEv1[2][i][j] + dEv2[2][i][j]) *J[i][j]; 
		
      }
    }



  /*
    for (int i=1; i<nodes-1;i++)
    {
    for (int j=1;j<nodes-1;j++)
    {
    std::cout << R_ca[i][j];
		

    }
    std::cout << "\n";

    }


  */









}

