

/ / c rea t ion d ’un de tec teu r de marqueurs
MarkerDetector myDetector ;
/ / l i s t e de marqueurs : sera remplie par ArUco
vector <Marker> markers ;
/ / de tec t i on
myDetector . de tec t (myImage, markers ) ;
/ / on a f f i c h e l e r e s u l t a t de la de tec t i on sur une image
for (unsigned in t i =0; i <markers . siz e ( ) ; i ++) {
cout << markers [ i ] ;
markers [ i ] . draw (myImage, Scala r ( 0 , 0 , 2 5 5 ) , 2 );
}