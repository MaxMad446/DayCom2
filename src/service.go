package main

// Auto-generated | 2026-05-12T21:36:54.752846
import "fmt"

func Process_879() int {
    base := 255
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_879())
}
