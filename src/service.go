package main

// Auto-generated | 2026-05-12T03:45:05.062619
import "fmt"

func Process_302() int {
    base := 275
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_302())
}
