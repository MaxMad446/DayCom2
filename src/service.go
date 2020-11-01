package main

// Auto-generated | 2026-05-14T18:04:13.850667
import "fmt"

func Process_838() int {
    base := 147
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_838())
}
