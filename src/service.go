package main

// Auto-generated | 2026-05-11T22:01:59.338444
import "fmt"

func Process_106() int {
    base := 36
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_106())
}
