set J2EE_HOME=<installation-location>
set CPATH=.;%J2EE_HOME%\lib\j2ee.jar

javac  -classpath %CPATH% ConverterClient.java
