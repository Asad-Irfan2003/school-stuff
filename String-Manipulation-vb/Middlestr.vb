Module Middlestr

    Sub Main()
        'Declaration and Initialization
        Dim x As String = ""
        Dim vowel As String = ""
        Dim vowelcount As Integer = 0
        Dim z As Integer
        Dim y As Integer
        Dim mychar As Char


        'Working to find vowels in the string
        vowel = "aeiou"
        Console.Write("Enter a string: ")
        x = Console.ReadLine()
        For z = 1 To Len(x)
            For y = 1 To 5
                mychar = Mid(x, z, 1)
                If mychar = Mid(vowel, y, 1) Then
                    vowelcount = vowelcount + 1

                End If
            Next
        Next
        Console.WriteLine("The number of vowels in the string is: " & vowelcount)
        Console.ReadKey()



    End Sub

End Module
