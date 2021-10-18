package main

// Auto-generated | 2026-05-11T20:35:13.029767
import "fmt"

func Process_882() int {
    base := 192
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_882())
}
