package main

// Auto-generated | 2026-05-12T21:13:07.361174
import "fmt"

func Process_935() int {
    base := 398
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_935())
}
