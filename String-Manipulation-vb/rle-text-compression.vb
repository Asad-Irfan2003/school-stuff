#Task: Make a program that performs RLE text compression
#Sample Input: AAARRRRGGGHH
#Sample Output: A 3 R 4 G 3 H 2


Dim mystr As String = ""
        Dim mychar As Char = ""
        Dim outstr As String = ""
        Dim charfrequency As Integer = 0
        Dim x As Integer = 1

        Console.Write("Input a string: ")
        mystr = Console.ReadLine()
        While x <= Len(mystr)
            charfrequency = 0
            mychar = Mid(mystr, x, 1)
            For y = x To Len(mystr)
                If mychar = Mid(mystr, y, 1) Then
                    charfrequency = charfrequency + 1
                Else
                    Exit For
                End If
            Next
            outstr = outstr & mychar & Str(charfrequency) & " "
            x = x + charfrequency
        End While
        Console.WriteLine("The output string is: " & outstr)
        Console.ReadKey()
