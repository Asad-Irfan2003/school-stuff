Module Module1

    Sub Main()
        Dim s As String = ""
        Dim a As Integer = 0
        Dim e As Integer = 0
        Dim i As Integer = 0
        Dim o As Integer = 0
        Dim u As Integer = 0
        Dim mychar As Char = ""
        Dim voweltotal As Integer = 0

        Console.Write("Input a string: ")
        s = Console.ReadLine()
        For x = 1 To Len(s)
            mychar = LCase(Mid(s, x, 1))
            If mychar = "a" Then
                a = a + 1
            ElseIf mychar = "e" Then
                e = e + 1
            ElseIf mychar = "i" Then
                i = i + 1
            ElseIf mychar = "o" Then
                o = o + 1
            ElseIf mychar = "u" Then
                u = u + 1
            End If
        Next
        voweltotal = a + e + i + o + u
        Console.WriteLine("Number of vowels in string: " & Str(voweltotal))
        Console.WriteLine("a: " & Str(a))
        Console.WriteLine("e: " & Str(e))
        Console.WriteLine("i: " & Str(i))
        Console.WriteLine("o: " & Str(o))
        Console.WriteLine("u: " & Str(u))
        Console.ReadKey()
    End Sub

End Module
