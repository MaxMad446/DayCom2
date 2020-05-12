package main

// Auto-generated | 2026-05-11T19:26:48.961024
import "fmt"

func Process_290() int {
    base := 375
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_290())
}
