cmake_minimum_required(VERSION 3.0.0)

project(Calculator_Project VERSION 1.0.0)

set(name "Mohsen")

message("Hello ${name}")


set(var1 aa bb cc)
message("\nVAR 1  aa bb cc: " ${var1})
message("VAR 1 'aa bb cc': ${var1}")

set(var2 aa;bb;cc)
message("\nVAR 2  aa;bb;cc: " ${var2})
message("VAR 2 'aa;bb;cc': ${var2}")


set(var3 "aa" "bb" "cc")
message("\nVAR 3  'aa' 'bb' 'cc' : " ${var3})
message("VAR 3 ''aa' 'bb' 'cc'': ${var3}")

set(var4 "aa bb cc")
message("\nVAR 4  'aa bb cc' : " ${var4})
message("VAR 4 ''aa bb cc'': ${var4}")

set(var5 "aa;bb;cc")
message("\nVAR 5  'aa;bb;cc' : " ${var5})
message("VAR 5 ''aa;bb;cc'': ${var5}")


message("\n")
set(NAME Mohsen)
set(Mohsen Bg)

message("NAME: " ${NAME} ${${NAME}})
message("\n")


set(list_var a b c;d "f;e" 2.718 "Hello There")
list(APPEND list_var 1.6 XX)
message("APPEND 1.6 XX: "${list_var})

list(REMOVE_AT list_var 2 -3)
message("REMOVE_AT 2 -3: "${list_var})

list(REMOVE_ITEM list_var a 2.718)
message("REMOVE_ITEM a 2.718: "${list_var})


list(INSERT list_var 2 XX 5)
message("INSERT 2 XX 5: "${list_var})

list(REVERSE list_var)
message("REVERSE: "${list_var})

list(REMOVE_DUPLICATES list_var)
message("REMOVE_DUPLICATES: "${list_var})


list(SORT list_var)
message("SORT: "${list_var})
