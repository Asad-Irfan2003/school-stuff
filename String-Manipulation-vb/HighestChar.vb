Module Module1

    Sub Main()
        Dim s As String = ""
        Dim alphabets As String = "abcdefghijklmnopqrstuvwxyz"
        Dim HighestCount As Integer = -1000
        Dim count As Integer = 0
        Dim mychar As Char = ""
        Dim HighestChar As Char = ""
        Dim y As Integer = 0

        Console.Write("Input a string: ")
        s = LCase(Console.ReadLine())
        For x = 1 To 26
            count = 0
            mychar = Mid(alphabets, x, 1)
            y = InStr(s, mychar)
            While y > 0
                count = count + 1
                y = y + 1
                y = InStr(y, s, mychar)
            End While
            If count > HighestCount Then
                HighestCount = count
                HighestChar = mychar

            End If
           
        Next
        Console.WriteLine("The most occuring alphabet is: " & HighestChar)
        Console.WriteLine("Number of times it occurs: " & Str(HighestCount))
        Console.ReadKey()

    End Sub

End Module
