Module Module1

    Sub Main()
        Dim s As String = ""
        Dim alphabets As String = "abcdefghijklmnopqrstuvwxyz"
        Dim mychar As Char = ""
        Dim y As Integer = 0
        Dim x As Integer = 0
        Dim mybool As Boolean = True
        Console.Write("Input a string: ")
        s = Console.ReadLine()
        LCase(s)
        For x = 1 To 26
            mychar = Mid(alphabets, x, 1)
            y = InStr(s, mychar)
            If y = 0 Then
                mybool = False
            End If
        Next

        If mybool = True Then
            Console.WriteLine("The string contains all alphabets")
        Else
            Console.WriteLine("The string does not contain all alphabets")
        End If
        Console.ReadKey()

    End Sub

End Module
