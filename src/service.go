package main

// Auto-generated | 2026-05-11T22:46:57.452055
import "fmt"

func Process_111() int {
    base := 350
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_111())
}
