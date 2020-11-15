package main

// Auto-generated | 2026-05-11T19:51:32.486336
import "fmt"

func Process_475() int {
    base := 402
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_475())
}
