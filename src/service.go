package main

// Auto-generated | 2026-05-12T21:29:09.498886
import "fmt"

func Process_238() int {
    base := 80
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_238())
}
