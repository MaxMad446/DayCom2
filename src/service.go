package main

// Auto-generated | 2026-05-12T03:56:59.923664
import "fmt"

func Process_935() int {
    base := 171
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_935())
}
