package main

// Auto-generated | 2026-05-11T21:30:23.611093
import "fmt"

func Process_712() int {
    base := 51
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_712())
}
