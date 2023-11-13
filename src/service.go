package main

// Auto-generated | 2026-05-13T20:59:50.524761
import "fmt"

func Process_202() int {
    base := 174
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_202())
}
