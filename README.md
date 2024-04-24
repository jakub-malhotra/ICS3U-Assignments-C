<h1> # ICS3U-Assignments-C </h1> 
<h2> All of my C assignments in ICS3U</h2>

<h2>To compile a C program if the CS50's C Library is used</h>  

  gcc ./Main.c -o ./ Main.app -lcs50  

<h2> To install the CS50 C library </h2>

<h3>Ubuntu</h3>
$ curl -s https://packagecloud.io/install/repositories/cs50/repo/script.deb.sh | sudo bash  

$ sudo apt install libcs50  



    
<h3>Fedora</h3>
$ curl -s https://packagecloud.io/install/repositories/cs50/repo/script.rpm.sh | sudo bash  

$ dnf install libcs50

<h3>From Source (Linux and Mac)</h3>
Download the latest release from https://github.com/cs50/libcs50/releases  


Extract libcs50-*.*  
cd libcs50-*  
sudo make install
