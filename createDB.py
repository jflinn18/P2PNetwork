#Probably need a MySQL server on each node of the network.

import mysql.connector

cnx = mysql.connector.connect(host="127.0.0.1", user="root")

cursor = cnx.cursor()

cursor.execute("CREATE DATABASE IF NOT EXIST mydata")


cnx.close


