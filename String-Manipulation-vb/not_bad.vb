Module Module1

    Sub Main()
        Dim s As String = ""
        Dim str1 As String = ""
        Dim str2 As String = ""
        Console.Write("Input a string: ")
        s = Console.ReadLine()
        If InStr(s, "not") < InStr(s, "bad") Then
            str1 = Left(s, InStr(s, "not") - 1)
            str2 = Mid(s, InStr(s, "bad") + 3, Len(s))
            Console.WriteLine("The output string is: " & str1 & "good" & str2)
        Else
            Console.WriteLine("The output string is: " & s)
        End If
        Console.ReadKey()
    End Sub

End Module
