clear all;close all;clc;
 p = dlmread('processors.dat');
 dyna(2-1) = dlmread('datadynamic2.dat');
 dyna(3-1) =dlmread('datadynamic3.dat');
 dyna(4-1) =dlmread('datadynamic4.dat');
 dyna(5-1) =dlmread('datadynamic5.dat');
 dyna(6-1) =dlmread('datadynamic6.dat');
 dyna(7-1) =dlmread('datadynamic7.dat');
 dyna(8-1) =dlmread('datadynamic8.dat');
 dyna(9-1) =dlmread('datadynamic9.dat');
 dyna(10-1) =dlmread('datadynamic10.dat');
 dyna(11-1) =dlmread('datadynamic11.dat');
 dyna(12-1) = dlmread('datadynamic12.dat');
 dyna(13-1) =dlmread('datadynamic13.dat');
 dyna(14-1) =dlmread('datadynamic14.dat');
 dyna(15-1) =dlmread('datadynamic15.dat');
 dyna(16-1) =dlmread('datadynamic16.dat');
 dyna(17-1) =dlmread('datadynamic17.dat');
 dyna(18-1) =dlmread('datadynamic18.dat');
 dyna(19-1) =dlmread('datadynamic19.dat');
 dyna(20-1) =dlmread('datadynamic20.dat');
 dyna(21-1) =dlmread('datadynamic21.dat');
 dyna(22-1) =dlmread('datadynamic22.dat');
 dyna(23-1) =dlmread('datadynamic23.dat');
 dyna(24-1) =dlmread('datadynamic24.dat');
 dyna(25-1) =dlmread('datadynamic25.dat');
 dyna(26-1) =dlmread('datadynamic26.dat');
 dyna(27-1) =dlmread('datadynamic27.dat');
 dyna(28-1) =dlmread('datadynamic28.dat');
 dyna(29-1) = dlmread('datadynamic29.dat');
 dyna(30-1) =dlmread('datadynamic30.dat');
 dyna(31-1) =dlmread('datadynamic31.dat');
 dyna(32-1) =dlmread('datadynamic32.dat');
 
 for i=1:31
     s(i) = dyna(i);
 end
 plot(p,dyna,'r')