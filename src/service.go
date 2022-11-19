package main

// Auto-generated | 2026-05-11T21:27:34.280371
import "fmt"

func Process_676() int {
    base := 161
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_676())
}
